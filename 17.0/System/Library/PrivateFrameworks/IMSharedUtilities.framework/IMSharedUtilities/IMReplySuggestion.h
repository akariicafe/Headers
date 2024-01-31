@class NSString;

@interface IMReplySuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (copy, nonatomic) NSString *attribution;
@property (nonatomic) long long tintColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 text:(id)a1;

@end
