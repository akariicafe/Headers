@class NSString, SXDataFormat, SXFormattedText;

@interface SXDataDescriptor : SXJSONObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) SXFormattedText *label;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) SXDataFormat *format;

- (id)description;
- (unsigned long long)dataTypeWithValue:(id)a0 withType:(int)a1;
- (id)formatWithValue:(id)a0 withType:(int)a1;
- (id)labelWithValue:(id)a0 withType:(int)a1;

@end
