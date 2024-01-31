@class NSString;

@interface MFTypeInfo : NSObject

@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *pathExtension;
@property (copy, nonatomic) NSString *filename;
@property (nonatomic) unsigned int osType;

- (void).cxx_destruct;

@end
