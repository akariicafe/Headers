@class NSString, NSNumber, FBKUploadTask;

@interface FBKBugSession : NSManagedObject

@property long long state;
@property (retain) NSString *identifier;
@property (retain) NSString *deviceIdentifier;
@property (retain) FBKUploadTask *uploadTask;
@property (retain) NSNumber *bytesToUpload;
@property (retain) NSNumber *bytesUploaded;

+ (id)entityName;
+ (id)bugSessionWithDEDBugSession:(id)a0 inContext:(id)a1;

- (id)deviceFromManager:(id)a0;
- (BOOL)hasNumberOfBytesToUpload;

@end
