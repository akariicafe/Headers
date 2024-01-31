@interface MXMSystemSampleTag : MXMSampleTag

@property (class, readonly, copy, nonatomic) MXMSystemSampleTag *CPUCores;
@property (class, readonly, copy, nonatomic) MXMSystemSampleTag *CPUCoresPhysical;
@property (class, readonly, copy, nonatomic) MXMSystemSampleTag *CPUCoresLogical;

@end
