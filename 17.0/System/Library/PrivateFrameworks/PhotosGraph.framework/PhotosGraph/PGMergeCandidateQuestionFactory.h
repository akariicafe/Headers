@class NSString, PHFetchResult, PGManagerWorkingContext;

@interface PGMergeCandidateQuestionFactory : NSObject <PGQuestionFactory> {
    PGManagerWorkingContext *_workingContext;
    short _questionVersion;
}

@property (retain, nonatomic) PHFetchResult *persons;
@property (readonly, nonatomic) long long questionOptions;
@property (readonly, nonatomic) unsigned short questionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)initWithWorkingContext:(id)a0 questionVersion:(short)a1;

@end
