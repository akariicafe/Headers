@class NSURL, NSString;

@interface CSImportInfo : NSObject

@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSString *sandboxExtension;
@property (retain, nonatomic) NSString *externalID;

- (void).cxx_destruct;

@end
