def atbash(text: str):
    if "a" <= text <= "z":
        return chr(ord("z")-ord(text)+ord('a'))
    elif "A" <= text <= "Z":
        return chr(ord("Z") - ord(text) + ord('A'))
    elif "а" <= text <= "я":
        return chr(ord("я")-ord(text)+ord('а'))
    elif "А" <= text <= "Я":
        return chr(ord("Я") - ord(text) + ord('А'))
    return text
result=''
for char in input('Введите текст для шифра: '):
    result=result+atbash(char)
print(result)
