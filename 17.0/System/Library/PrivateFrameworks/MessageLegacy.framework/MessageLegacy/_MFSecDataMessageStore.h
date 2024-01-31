@class NSString;

@interface _MFSecDataMessageStore : MFDataMessageStore

@property (copy, nonatomic) NSString *storagePath;

+ (Class)classForMimePart;

@end
