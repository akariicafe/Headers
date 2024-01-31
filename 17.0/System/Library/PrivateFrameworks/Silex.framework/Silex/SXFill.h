@interface SXFill : SXJSONObject

@property (readonly, nonatomic) unsigned long long attachment;
@property (readonly, nonatomic) unsigned long long fillMode;
@property (readonly, nonatomic) unsigned long long horizontalAlignment;
@property (readonly, nonatomic) unsigned long long verticalAlignment;

- (unsigned long long)attachmentWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)fillModeWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)horizontalAlignmentWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)verticalAlignmentWithValue:(id)a0 withType:(int)a1;

@end
