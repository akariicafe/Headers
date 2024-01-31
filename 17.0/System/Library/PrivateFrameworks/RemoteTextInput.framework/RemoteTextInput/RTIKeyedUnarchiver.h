@class NSString;

@interface RTIKeyedUnarchiver : NSKeyedUnarchiver <RTICoding>

@property (nonatomic) unsigned long long rtiVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
