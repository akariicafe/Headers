@interface TRITaskOptions : TRIPBMessage

@property (nonatomic) BOOL isManuallyTargeted;
@property (nonatomic) BOOL hasIsManuallyTargeted;

+ (id)descriptor;

@end
