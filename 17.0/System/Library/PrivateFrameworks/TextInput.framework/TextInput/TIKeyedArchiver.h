@class NSString;

@interface TIKeyedArchiver : NSKeyedArchiver <TICoding>

@property (nonatomic) unsigned long long tiVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
