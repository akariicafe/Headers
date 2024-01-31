@class NSTextElement;
@protocol NSTextLocation;

@interface _NSTextElementLocation : NSCountableTextLocation

@property NSTextElement *textElement;
@property (readonly) id<NSTextLocation> baseLocation;
@property (readonly) long long offset;

- (void)dealloc;
- (BOOL)isEqualToTextLocation:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTextElement:(id)a0 baseLocation:(id)a1 offset:(long long)a2;
- (void)updateBaseLocation;

@end
