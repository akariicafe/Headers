@class NSString, SBThermalController;

@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding> {
    SBThermalController *_thermalController;
}

@property (readonly, nonatomic) long long thermalStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thermometerGlyphForThermalStatus:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithThermalController:(id)a0;

@end
