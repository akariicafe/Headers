@class NSString, NSDictionary, NSArray, NSDate;

@interface APMetric : NSObject <APMetricProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *osBuild;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (retain, nonatomic) NSDictionary *properties;
@property (nonatomic) BOOL areNetworkDates;
@property (nonatomic) long long purpose;
@property (readonly, nonatomic) long long metric;
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *internalProperties;
@property (readonly, nonatomic) long long options;
@property (retain, nonatomic) NSString *handle;
@property (readonly, nonatomic) long long order;
@property (retain, nonatomic) NSString *trace;
@property (retain, nonatomic) NSArray *branches;
@property (readonly, nonatomic) NSDictionary *relayData;
@property (retain, nonatomic) NSArray *environment;
@property (nonatomic) unsigned int source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_options;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_properties;
- (void)addInternalPropertyValue:(id)a0 forKey:(id)a1;
- (id)initWithPurpose:(long long)a0 metric:(long long)a1 contentIdentifier:(id)a2 contextIdentifier:(id)a3 identifier:(id)a4 branches:(id)a5 properties:(id)a6 internalProperties:(id)a7 relayData:(id)a8 environment:(id)a9 order:(long long)a10 options:(long long)a11;
- (void)updatePurpose:(long long)a0;
- (id)_relayData;
- (id)_addOptionsToProperties:(id)a0;
- (id)_descriptionWithFormat:(id)a0;
- (id)_internalProperties;
- (id)_optionsArray;
- (void)initDeviceInfo;
- (void)initUndefinedDeviceInfo;
- (BOOL)validateMetricAndSetupIdentifiers:(id)a0;

@end
