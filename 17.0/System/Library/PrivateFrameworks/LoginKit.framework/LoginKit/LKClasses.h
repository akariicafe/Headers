@class NSArray, NSString;

@interface LKClasses : NSObject <LKClassProviding>

@property (readonly, copy, nonatomic) NSArray *classes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
