@class NSString;
@protocol TUICandidateViewStyle;

@interface CACCorrectionsCandidateState : NSObject <TUICandidateViewState>

@property (retain, nonatomic) id<TUICandidateViewStyle> style;
@property (retain, nonatomic) id<TUICandidateViewStyle> disambiguationStyle;
@property (nonatomic) long long primaryGridRowType;
@property (nonatomic) long long disambiguationGridRowType;
@property (nonatomic) long long disambiguationGridPosition;
@property (nonatomic) long long sortControlPosition;
@property (nonatomic) long long inlineTextViewPosition;
@property (nonatomic) long long arrowButtonPosition;
@property (nonatomic) long long arrowButtonDirection;
@property (nonatomic) BOOL hasBackdrop;
@property (nonatomic) BOOL candidateNumberEnabled;
@property (nonatomic) double yOffset;
@property (nonatomic) double additionalHeight;
@property (nonatomic) struct CGPoint { double x; double y; } arrowButtonOffset;
@property (nonatomic) unsigned long long borders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
