from string import printable, whitespace
from argparse import ArgumentParser

STRING_ENCODER = ''
STRING_ENCODER += printable.replace(whitespace, '')

def reverse_str (name: str) -> str:
    str_reversed = ''
    name = list(name)
    name.reverse()
    for char in name:
        str_reversed += char

    return str_reversed

def encrypt (name: str) -> str:
    string_encrypt = ''
    index_char_encrypt = 0

    name = reverse_str(name)

    for char in name:
        index_char_encrypt = STRING_ENCODER.index(char) + 1
        if index_char_encrypt > STRING_ENCODER.__len__():
            index_char_encrypt = 0

        string_encrypt += STRING_ENCODER[index_char_encrypt]

    return string_encrypt

def decrypt (name: str) -> str:
    string_decrypt = ''
    index_char_encrypt = 0

    name = reverse_str(name)

    for char in name:
        index_char_encrypt = STRING_ENCODER.index(char) - 1
        string_decrypt += STRING_ENCODER[index_char_encrypt]

    return string_decrypt

if __name__ == '__main__':

    parser = ArgumentParser(prog='EncryptSoft', description='This command encrypt and decrypt with simple algorithm.', epilog='If you enter the flag -h then it show the text for help.')
    parser.add_argument('names', metavar='STRING FOR EN/DECODE', type=str, nargs='+', help='This is a strings that it\'ll en/decode.')
    parser.add_argument('-e', '--encode', action='store_true')
    parser.add_argument('-d', '--decode', action='store_true')

    arg = parser.parse_args()

    if arg.encode:
        print('\n\t\tENCODE')
        for index, word in enumerate(arg.names):
            print(f'\t{index + 1} -> {encrypt(word)}')

    if arg.decode:
        print('\n\t\tDECODE')
        for index, word in enumerate(arg.names):
            print(f'\t{index + 1} -> {decrypt(word)}')


