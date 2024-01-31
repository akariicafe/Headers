@class NSString;

@interface SXJSONComponentAnchor : SXJSONObject <SXComponentAnchor>

@property (readonly, nonatomic) long long targetAnchorPosition;
@property (readonly, nonatomic) long long originAnchorPosition;
@property (readonly, nonatomic) NSString *targetComponentIdentifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)anchorAlignmentForString:(id)a0;
- (long long)originAnchorPositionWithValue:(id)a0 withType:(int)a1;
- (long long)targetAnchorPositionWithValue:(id)a0 withType:(int)a1;

@end
