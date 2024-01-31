@class CADisplay, NSString;

@interface MXMDisplayDescriptor : NSObject

@property (readonly, nonatomic) CADisplay *display;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) BOOL main;
@property (readonly, nonatomic, getter=main) BOOL isMain;

- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0;

@end
