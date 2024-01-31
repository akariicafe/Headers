@class NSString;

@interface PHImportAssetNameDescription : NSObject {
    NSString *_filename;
    NSString *_uuid;
}

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFileName:(id)a0 uuid:(id)a1;

@end
