@class NSString, NSDictionary, NSArray, KNBuildAttributes;

@interface KNAnimatedBuild : NSObject <NSSecureCoding> {
    KNAnimatedBuild *_parentBuild;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long buildType;
@property (readonly, nonatomic) NSString *effectIdentifier;
@property (nonatomic) long long eventIndex;
@property (nonatomic) long long indexInEvent;
@property (readonly, nonatomic) long long stageIndex;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) unsigned long long deliveryOption;
@property (readonly, nonatomic) unsigned long long deliveryStyle;
@property (readonly, nonatomic) Class pluginClass;
@property (readonly, nonatomic) KNBuildAttributes *attributes;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double eventStartTime;
@property (nonatomic) double duration;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double eventEndTime;
@property (readonly, nonatomic) BOOL automatic;
@property (nonatomic) BOOL animateAtEndOfPreviousBuild;
@property (readonly, nonatomic) BOOL isBuildIn;
@property (readonly, nonatomic) BOOL isBuildOut;
@property (readonly, nonatomic) BOOL isActionBuild;
@property (readonly, nonatomic) BOOL isEmphasisBuild;
@property (readonly, nonatomic) BOOL isContentBuild;
@property (readonly, nonatomic) BOOL isLineDrawBuild;
@property (readonly, nonatomic) BOOL isDriftBuild;
@property (readonly, nonatomic) BOOL isMagicChartBuild;
@property (nonatomic) BOOL isVisibleAtBeginning;
@property (nonatomic) BOOL isVisibleAtEnd;
@property (nonatomic) BOOL isLastStage;
@property (readonly, nonatomic) BOOL isImplicitlyVisibleAtBeginning;
@property (nonatomic) BOOL isInitialAmbientBuild;
@property (copy, nonatomic) NSDictionary *previousAttributes;
@property (copy, nonatomic) NSDictionary *finalAttributes;
@property (readonly, nonatomic) KNAnimatedBuild *parentBuild;
@property (readonly, nonatomic) NSArray *childBuilds;
@property (readonly, nonatomic) BOOL isParentBuild;
@property (readonly, nonatomic) BOOL isChildBuild;
@property (readonly, nonatomic) double durationWithChildren;
@property (readonly, nonatomic) BOOL isActionScale;
@property (readonly, nonatomic) BOOL isActionRotation;
@property (readonly, nonatomic) BOOL isActionOpacity;
@property (readonly, nonatomic) BOOL isActionMotionPath;
@property (readonly, nonatomic) BOOL hasPreviousActionAttributes;
@property (readonly, nonatomic) BOOL hasPreviousActionScale;
@property (readonly, nonatomic) BOOL hasPreviousActionRotate;
@property (readonly, nonatomic) BOOL hasFinalActionScale;
@property (readonly, nonatomic) BOOL hasFinalActionRotate;
@property (readonly, nonatomic) double initialScale;
@property (readonly, nonatomic) double finalScale;
@property (readonly, nonatomic) double maxScale;
@property (readonly, nonatomic) NSArray *requiredScales;
@property (readonly, nonatomic) double initialRotation;
@property (readonly, nonatomic) double finalRotation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isBuildByObject;
- (void)addChildBuild:(id)a0;
- (id)initWithBuildType:(long long)a0 effectIdentifier:(id)a1 attributes:(id)a2 pluginClass:(Class)a3 deliveryStyle:(unsigned long long)a4 deliveryOption:(unsigned long long)a5 eventIndex:(long long)a6 stageIndex:(long long)a7 startTime:(double)a8 eventStartTime:(double)a9 duration:(double)a10 direction:(unsigned long long)a11 automatic:(BOOL)a12 animateAtEndOfPreviousBuild:(BOOL)a13 parentBuild:(id)a14;
- (BOOL)isRelatedTo:(id)a0;
- (BOOL)isSiblingTo:(id)a0;
- (BOOL)p_isActionEffect:(id)a0;

@end
