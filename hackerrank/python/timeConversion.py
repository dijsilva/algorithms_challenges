def timeConversion(s):
    hhMMss = s.split(":")
    if hhMMss[-1][-2:] == 'AM':
        hour = int(hhMMss[0])
        if hour >= 12:
            return '0{}:{}:{}'.format(hour - 12, hhMMss[1], hhMMss[2][0:2])
        elif hour >= 10:
            return '{}:{}:{}'.format(hour, hhMMss[1], hhMMss[2][0:2])
        return '0{}:{}:{}'.format(hour, hhMMss[1], hhMMss[2][0:2])
    else:
        hour = int(hhMMss[0])
        if hour != 12:
            hour += 12
        return '{}:{}:{}'.format(hour, hhMMss[1], hhMMss[2][0:2])
    

print(timeConversion('07:45:54PM'))
print(timeConversion('05:45:54PM'))
print(timeConversion('12:00:00PM'))
print(timeConversion('13:45:54PM'))
print("##### manha ####")
print(timeConversion('14:45:54AM'))