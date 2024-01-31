@class NSString, UIFont, NSArray;

@interface CKPhoneNumberCompressor : NSObject

@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double desiredWidth;
@property (copy, nonatomic) NSArray *preferredCompressions;

- (void).cxx_destruct;
- (id)_compressPhoneNumberIfFitsInCompressionLevel:(int)a0;
- (id)compress;

@end
