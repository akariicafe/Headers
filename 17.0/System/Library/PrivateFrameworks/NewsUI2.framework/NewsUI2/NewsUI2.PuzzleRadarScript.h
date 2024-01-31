@class NSString, WKUserScript;

@interface NewsUI2.PuzzleRadarScript : NSObject <SWScript>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WKUserScript *userScript;
@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) BOOL queueable;

- (id)init;

@end
