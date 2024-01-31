@class NSString, BMFrontBoardDisplayElementDisplay, NSDate;

@interface BMFrontBoardDisplayElement : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) int elementType;
@property (readonly, nonatomic) long long layoutRole;
@property (nonatomic) BOOL hasLayoutRole;
@property (readonly, nonatomic) long long level;
@property (nonatomic) BOOL hasLevel;
@property (readonly, nonatomic) BOOL hasKeyboardFocus;
@property (nonatomic) BOOL hasHasKeyboardFocus;
@property (readonly, nonatomic) BOOL isUIApplicationElement;
@property (nonatomic) BOOL hasIsUIApplicationElement;
@property (readonly, nonatomic) BMFrontBoardDisplayElementDisplay *display;
@property (readonly, nonatomic) int changeType;
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
- (id)initWithAbsoluteTimestamp:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 elementType:(int)a3 layoutRole:(id)a4 level:(id)a5 hasKeyboardFocus:(id)a6 isUIApplicationElement:(id)a7 display:(id)a8 changeType:(int)a9;

@end
