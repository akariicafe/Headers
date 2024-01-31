@class NSString;

@interface ICASWindowSceneData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *windowSceneID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithWindowSceneID:(id)a0;

@end
