@interface HAPNumberParser : HAPTLVDescription

@property (readonly, nonatomic) unsigned long long decodedNumber;

- (id)initWithTLVData:(id)a0;

@end
