@class NSString;

@interface SUTapToRadar : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) long long classification;
@property (nonatomic) long long reproducibility;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (nonatomic) long long componentID;

+ (id)_stringOfClassification:(long long)a0;
+ (id)_stringOfReproducibility:(long long)a0;

- (id)init;
- (void)file;
- (void).cxx_destruct;

@end
