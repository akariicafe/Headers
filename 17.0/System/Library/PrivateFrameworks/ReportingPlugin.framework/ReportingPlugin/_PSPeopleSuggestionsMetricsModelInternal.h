@class NSString;

@interface _PSPeopleSuggestionsMetricsModelInternal : NSObject {
    void /* unknown type, empty encoding */ modelType;
    void /* unknown type, empty encoding */ otherModelTypeIdentifier;
    void /* unknown type, empty encoding */ trialIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithModelIdentifier:(id)a0 trialIdentifier:(id)a1;
- (id)initWithModelType:(long long)a0 trialIdentifier:(id)a1;

@end
