@class NSString, NSDictionary, NSData;

@interface WorkflowKit.WFCloudKitLibrary : NSObject <WFCloudKitItem> {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ recordSystemFieldsData;
}

@property (class, nonatomic, copy) NSString *recordType;
@property (class, nonatomic, copy) NSDictionary *properties;

@property (nonatomic, retain) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, retain) void /* unknown type, empty encoding */ dataFileRepresentation;
@property (nonatomic) void /* unknown type, empty encoding */ syncHash;
@property (nonatomic, copy) NSData *recordSystemFieldsData;

- (id)init;
- (void).cxx_destruct;
- (id)ensureFileAssets;

@end
