@class NSString;

@interface SBRingerButtonParameters : NSObject <BSDescriptionStreamable, NSCopying> {
    double _longPressTime;
    double _longPressTimeWhenSuppressed;
    long long _viewObstructionEligibility;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
