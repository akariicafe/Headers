@class DNDApplicationMO;

@interface DNDPerAppSettingsMO : DNDPerModeSettingsMO

@property (retain, nonatomic) DNDApplicationMO *application;

+ (id)fetchRequest;

@end
