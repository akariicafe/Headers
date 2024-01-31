@class NSString, NSData;

@interface CSDecryptInfo : NSObject

@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSData *decryptInfo;

- (void).cxx_destruct;
- (id)initWithPlistObject:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a0 externalID:(id)a1;

@end
