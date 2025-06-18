
#include "MyActor.h"

// 생성자
AMyActor::AMyActor()
{
 	// 이 액터가 매 프레임 Tick()을 호출하도록 설장
	PrimaryActorTick.bCanEverTick = true;

	// 시작 위치를 (0, 0)으로 초기화
	start = FVector2D(0.0f, 0.0f);

}

// BeginPlay: 게임 시작시 실행
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	// 액터가 등장하면 이동 시작
	move();
	
}

// Tick: 매 프레임 호출
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
// step(): 0 또는 1을 랜덤으로 반환
int32 AMyActor::step()
{
    return FMath::RandRange(0, 1); // 0 또는 1 랜덤 반환
}

// move(): 10번 이동하며 좌표 출력
void AMyActor::move()
{
    // 총 10회 반복
    for (int32 i = 0; i < 10; ++i)
    {
        // x, y축 각각 이동 거리 결정 (0 또는 1)
        int32 dx = step();
        int32 dy = step();

        // 좌표 업데이트
        start.X += dx;
        start.Y += dy;

        // 현재 좌표를 로그로 출력
        UE_LOG(LogTemp, Warning, TEXT("Step %d - Current Position: (%.0f, %.0f)"), i + 1, start.X, start.Y);
    }
}
