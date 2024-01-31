@class NSArray, NSDictionary, NSString;

@interface PXGPPTStringsLayout : PXGGridLayout <PXGStringSource>

@property (copy, nonatomic) NSArray *strings;
@property (copy, nonatomic) NSDictionary *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithStringCount:(unsigned long long)a0 localeCodes:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
