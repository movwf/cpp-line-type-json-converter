# C++ Line Type Json File Converter

Worked with MAC Address Vendor Database json file from
![https://macaddress.io/database-download](Mac Address Database)

### From line type styled json file 
```json
{"oui":"00:15:3C","isPrivate":false,"companyName":"Kprotech Co, Ltd"}
{"oui":"64:F8:8A","isPrivate":false,"companyName":"China Mobile Iot Co Ltd"}
{"oui":"70:B3:D5:D2:A","isPrivate":false,"companyName":"ITsynergy Ltd"}
{"oui":"00:14:07","isPrivate":false,"companyName":"Sperian Protection Instrumentation"}
```

### into proper json file
```json
{
"data":[
  {"oui":"00:15:3C","isPrivate":false,"companyName":"Kprotech Co, Ltd"},
  {"oui":"64:F8:8A","isPrivate":false,"companyName":"China Mobile Iot Co Ltd"},
  {"oui":"70:B3:D5:D2:A","isPrivate":false,"companyName":"ITsynergy Ltd"},
  {"oui":"00:14:07","isPrivate":false,"companyName":"Sperian Protection Instrumentation"},
      ]
}
````

