@class NSString;

@interface SecondPassConfig : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ waitForFinal;
@property (nonatomic) void /* unknown type, empty encoding */ useEndpointer;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
