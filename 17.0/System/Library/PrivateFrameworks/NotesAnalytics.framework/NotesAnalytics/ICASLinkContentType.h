@interface ICASLinkContentType : NSObject <AADataType>

@property (readonly, nonatomic) long long linkContentType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithLinkContentType:(long long)a0;

@end
