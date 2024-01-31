@class NSDate;

@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSDate *date;

+ (id)activeExperimentInformationWithError:(id *)a0;
+ (id)activeBMLTInformationWithError:(id *)a0;
+ (id)categoricalValueForExperimentAllocationStatus:(unsigned char)a0;
+ (id)notificationNameForDeploymentEnvironment:(int)a0;
+ (id)internalToExternalStatusMapping;
+ (id)getDateFromCursor:(id)a0;
+ (id)categoricalValueForRolloutAllocationStatus:(unsigned char)a0;
+ (id)syncProxyWithErrorHandler:(id /* block */)a0;
+ (id)_defaultProvider;
+ (id)sampleAllocationStatuses:(id)a0 correlationId:(id)a1 nrSamples:(unsigned int)a2;
+ (id)defaultProvider;

- (BOOL)isEqualToStatus:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(unsigned char)a0 date:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
