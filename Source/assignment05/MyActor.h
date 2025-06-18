

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class ASSIGNMENT05_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// 생성자
	AMyActor();

protected:
	// 게임 시작, 스폰 될 때 호출
	virtual void BeginPlay() override;

public:	
	// 매 프레임마다 호출
	virtual void Tick(float DeltaTime) override;



private:
	// 현재 위치를 저장할 2D 벡터 (x, y)
	FVector2D start;

	// 0 또는 1을 랜덤으로 반환 (이동 거리)
	int32 step();

	// 10번 랜덤 이동하며 위치 출력
	void move();
};
