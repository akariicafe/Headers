@class NSString;
@protocol SBUISystemApertureContentViewProviding;

@interface SBUISystemApertureContentProvider : NSObject <SBUISystemApertureContentProviding>

@property (retain, nonatomic) id<SBUISystemApertureContentViewProviding> leadingContentViewProvider;
@property (retain, nonatomic) id<SBUISystemApertureContentViewProviding> trailingContentViewProvider;
@property (retain, nonatomic) id<SBUISystemApertureContentViewProviding> primaryContentViewProvider;
@property (retain, nonatomic) id<SBUISystemApertureContentViewProviding> secondaryContentViewProvider;
@property (retain, nonatomic) id<SBUISystemApertureContentViewProviding> actionContentViewProvider;
@property (retain, nonatomic) id<SBUISystemApertureContentViewProviding> minimalContentViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
