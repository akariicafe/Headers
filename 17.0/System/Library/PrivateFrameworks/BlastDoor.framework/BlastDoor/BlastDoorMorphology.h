@class NSString, NSArray;

@interface BlastDoorMorphology : NSObject {
    void /* unknown type, empty encoding */ morphology;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long grammaticalGender;
@property (nonatomic, readonly) long long partOfSpeech;
@property (nonatomic, readonly) long long number;
@property (nonatomic, readonly) NSArray *customPronouns;

- (id)init;
- (void).cxx_destruct;

@end
