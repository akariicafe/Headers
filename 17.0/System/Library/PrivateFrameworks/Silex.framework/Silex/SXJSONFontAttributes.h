@class NSString, NSNumber;

@interface SXJSONFontAttributes : SXJSONObject <SXFontAttributes>

@property (readonly, nonatomic) NSString *fontFamily;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) long long weight;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSNumber *grade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)familyNameWithValue:(id)a0 withType:(int)a1;
- (long long)styleWithValue:(id)a0 withType:(int)a1;
- (long long)weightWithValue:(id)a0 withType:(int)a1;
- (long long)widthWithValue:(id)a0 withType:(int)a1;

@end
