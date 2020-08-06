function main()
oPrint := PDFClass():New()

oPrint:Begin()
oPrint:LstToPdf( "temp14.txt" )
oPrint:cFilename := "c:\temp.pdf"

oPrint:End()
return
