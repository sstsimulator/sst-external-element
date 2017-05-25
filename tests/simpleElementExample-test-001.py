import sst

obj = sst.Component("simpleExternalElement", "simpleExternalElement.SimpleExternalElement")
obj.addParams({
    "printFrequency" : "10",
    "repeats" : "15"
    })

