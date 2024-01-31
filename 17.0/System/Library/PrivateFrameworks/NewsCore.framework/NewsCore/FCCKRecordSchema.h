@class NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject {
    NSDictionary *_fieldSchemasByName;
    NSString *_clientRecordType;
    NSString *_serverRecordType;
}

- (id)init;
- (void).cxx_destruct;

@end
