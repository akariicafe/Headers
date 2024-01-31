@class NSString;

@interface VKCElementInfo : VKCBaseElement

@property (retain, nonatomic) NSString *text;

+ (id)infoWithText:(id)a0 parent:(id)a1;

- (id)children;
- (id)stringValue;
- (void).cxx_destruct;

@end
