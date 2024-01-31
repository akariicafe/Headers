@class NSString;

@interface NSNotATextLocation : NSObject <NSTextLocation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notATextLocation;

- (long long)compare:(id)a0;

@end
