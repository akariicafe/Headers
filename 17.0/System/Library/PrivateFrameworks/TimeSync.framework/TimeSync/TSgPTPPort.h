@class NSString, TSDgPTPPort, TSXgPTPPort, NSObject;
@protocol OS_dispatch_queue;

@interface TSgPTPPort : NSObject <TSXgPTPPortConnectionClient> {
    TSDgPTPPort *_implDC;
    TSXgPTPPort *_implXPC;
}

@property (readonly, nonatomic) unsigned short portNumber;
@property (readonly, nonatomic) int portRole;
@property (readonly, nonatomic) int portType;
@property (readonly, nonatomic) unsigned long long clockIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)gPTPPortWithImplDC:(id)a0;
+ (id)gPTPPortWithImplXPC:(id)a0;
+ (id)keyPathsForValuesAffectingClockIdentifier;
+ (id)keyPathsForValuesAffectingPortNumber;
+ (id)keyPathsForValuesAffectingPortRole;
+ (id)keyPathsForValuesAffectingPortType;
+ (id)keyPathsForValuesAffectingPropertyUpdateQueue;

- (int)portType;
- (id)init;
- (void)dealloc;
- (unsigned short)portNumber;
- (void).cxx_destruct;
- (unsigned long long)clockIdentifier;
- (id)initWithImplDC:(id)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
- (id)initWithImplXPC:(id)a0;
- (void)interruptedConnectionForPort:(id)a0;
- (int)portRole;
- (id)propertyUpdateQueue;
- (void)serviceTerminated;
- (void)setPropertyUpdateQueue:(id)a0;
- (BOOL)startAutomaticPropertyUpdates;
- (BOOL)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end
