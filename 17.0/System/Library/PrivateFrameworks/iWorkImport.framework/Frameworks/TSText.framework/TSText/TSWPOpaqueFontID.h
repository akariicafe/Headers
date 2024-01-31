@class NSString;

@interface TSWPOpaqueFontID : NSObject

@property (retain, nonatomic) NSString *desiredPostScriptName;
@property (retain, nonatomic) NSString *familyName;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFont:(id)a0;
- (id)initWithPostScriptName:(id)a0 familyName:(id)a1;

@end
