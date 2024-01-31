@class DTOSLogStackReferenceWrapper;

@interface DTOSLogArgumentConstReferences : NSObject {
    DTOSLogStackReferenceWrapper *etype;
    DTOSLogStackReferenceWrapper *stringVal;
    DTOSLogStackReferenceWrapper *prefix;
    DTOSLogStackReferenceWrapper *name;
    DTOSLogStackReferenceWrapper *tmpArgStruct;
    unsigned short typeID;
    BOOL skipped;
}

- (void).cxx_destruct;

@end
