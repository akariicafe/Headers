@class NSString, NSArray, NSDate;

@interface BMUserFocusInferredMode : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) int origin;
@property (readonly, nonatomic) NSString *originBundleID;
@property (readonly, nonatomic) BOOL isAutomationEnabled;
@property (nonatomic) BOOL hasIsAutomationEnabled;
@property (readonly, nonatomic) BOOL isStart;
@property (nonatomic) BOOL hasIsStart;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *originAnchorType;
@property (readonly, nonatomic) unsigned long long uiLocation;
@property (nonatomic) BOOL hasUiLocation;
@property (readonly, nonatomic) double confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (readonly, nonatomic) NSArray *serializedTriggers;
@property (readonly, nonatomic) int modeType;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;
@property (nonatomic) BOOL hasShouldSuggestTriggers;
@property (readonly, nonatomic) NSString *userModeName;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_serializedTriggersJSONArray;
- (id)initWithAbsoluteTimestamp:(id)a0 modeIdentifier:(id)a1 origin:(int)a2 originBundleID:(id)a3 isAutomationEnabled:(id)a4 isStart:(id)a5 uuid:(id)a6 originAnchorType:(id)a7 uiLocation:(id)a8 confidenceScore:(id)a9 serializedTriggers:(id)a10 modeType:(int)a11 shouldSuggestTriggers:(id)a12 userModeName:(id)a13;

@end
