@class NSString, NSNumber;

@interface ICASWindowSceneResizeData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *usesMultiWindow;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUsesMultiWindow:(id)a0;

@end
